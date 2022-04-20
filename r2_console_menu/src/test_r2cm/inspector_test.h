#pragma once

#include "base/r2cm_iItem.h"
#include "r2/r2_Singleton.h"

namespace inspector_test
{
	class Basic : public r2cm::iItem, public r2::SingleTon<Basic>
	{
	public:
		TitleFuncT GetTitleFunction() const override;
		DoFuncT GetDoFunction() override;
	};

	class ShowFile : public r2cm::iItem, public r2::SingleTon<ShowFile>
	{
	public:
		TitleFuncT GetTitleFunction() const override;
		DoFuncT GetDoFunction() override;
	};
}