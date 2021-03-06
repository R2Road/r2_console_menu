#pragma once

#include "r2cm/r2cm_Singleton.h"
#include "r2cm/r2cm_iItem.h"

namespace key_test
{
	class Basic : public r2cm::iItem, public r2cm::SingleTon<Basic>
	{
	public:
		TitleFunctionT GetTitleFunction() const override;
		DoFunctionT GetDoFunction() override;
	};
}