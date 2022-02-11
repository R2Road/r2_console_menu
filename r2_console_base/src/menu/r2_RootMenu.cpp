#include "pch.h"
#include "r2_RootMenu.h"

#include "base/r2_Director.h"
#include "base/r2_eTestResult.h"

#include "menu/r2_InputMenu.h"
#include "test/key_test.h"

namespace r2
{
	MenuUp RootMenu::Create( Director& director )
	{
		MenuUp ret( new ( std::nothrow ) Menu(
			director
			, GetTitle(),
					"> Inprogress : BlaBla"
			"\n"	"> To do : BlaBla"
			"\n"	"> To do : BlaBla"
			"\n"	"> To do : BlaBla"
		) );

		{
			ret->AddChild( '1', key_test::Basic::GetInstance() );
			ret->AddChild( '2', key_test::Basic::GetInstance() );
			ret->AddChild( '3', key_test::Basic::GetInstance() );
			ret->AddChild( '4', key_test::Basic::GetInstance() );
			ret->AddChild( '5', key_test::Basic::GetInstance() );

			ret->AddLineFeed();

			ret->AddChild(
				'q'
				, []()->const char* { return r2::InputMenu::GetTitle(); }
				, [&director]()->eTestResult
				{
					director.Setup( r2::InputMenu::Create( director ) );
					return eTestResult::ChangeScene;
				}
			);


			ret->AddSplit();


			ret->AddChild(
				27
				, []()->const char* { return "Exit"; }
				, []()->eTestResult { return eTestResult::Exit; }
			);
		}

		return ret;
	}
}