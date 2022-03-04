#pragma once

#include "base/r2_iItem.h"
#include "base/r2_Singleton.h"

namespace window_input_test
{
	class TestKeyboardInputCollector : public r2cm::iItem, public r2::SingleTon<TestKeyboardInputCollector>
	{
	public:
		TitleFuncT GetTitleFunction() const override;
		DoFuncT GetDoFunction() override;
	};
}