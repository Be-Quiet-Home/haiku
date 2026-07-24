/*
 * Copyright 2025, Andrew Lindesay <apl@lindesay.co.nz>.
 * All rights reserved. Distributed under the terms of the MIT License.
 */


#include "PackageFilterSpecification.h"


PackageFilterSpecification::PackageFilterSpecification()
	:
	fSearchTerms(""),
	fDepotName(""),
	fCategory(""),
	fMinimumPackageTimestamp(0),
	fMaximumPackageTimestampExclusive(0),
	fMinimumVersionTimestamp(0),
	fShowOnlyDesktopPackages(false),
	fShowOnlyNativeDesktopPackages(false),
	fShowAvailablePackages(true),
	fShowInstalledPackages(true),
	fShowSourcePackages(false),
	fShowDevelopPackages(false)
{
}


PackageFilterSpecification::~PackageFilterSpecification()
{
}


bool
PackageFilterSpecification::operator==(const PackageFilterSpecification& other) const
{
	return fSearchTerms == other.SearchTerms() && fDepotName == other.DepotName()
		&& fCategory == other.Category()
		&& fMinimumPackageTimestamp == other.MinimumPackageTimestamp()
		&& fMaximumPackageTimestampExclusive
			== other.MaximumPackageTimestampExclusive()
		&& fMinimumVersionTimestamp == other.MinimumVersionTimestamp()
		&& fShowOnlyDesktopPackages == other.ShowOnlyDesktopPackages()
		&& fShowOnlyNativeDesktopPackages == other.ShowOnlyNativeDesktopPackages()
		&& fShowAvailablePackages == other.ShowAvailablePackages()
		&& fShowInstalledPackages == other.ShowInstalledPackages()
		&& fShowSourcePackages == other.ShowSourcePackages()
		&& fShowDevelopPackages == other.ShowDevelopPackages();
}


bool
PackageFilterSpecification::operator!=(const PackageFilterSpecification& other) const
{
	return !(*this == other);
}


BString
PackageFilterSpecification::SearchTerms() const
{
	return fSearchTerms;
}


BString
PackageFilterSpecification::DepotName() const
{
	return fDepotName;
}


BString
PackageFilterSpecification::Category() const
{
	return fCategory;
}


uint64
PackageFilterSpecification::MinimumPackageTimestamp() const
{
	return fMinimumPackageTimestamp;
}


uint64
PackageFilterSpecification::MaximumPackageTimestampExclusive() const
{
	return fMaximumPackageTimestampExclusive;
}


uint64
PackageFilterSpecification::MinimumVersionTimestamp() const
{
	return fMinimumVersionTimestamp;
}


bool
PackageFilterSpecification::ShowOnlyDesktopPackages() const
{
	return fShowOnlyDesktopPackages;
}


bool
PackageFilterSpecification::ShowOnlyNativeDesktopPackages() const
{
	return fShowOnlyNativeDesktopPackages;
}


bool
PackageFilterSpecification::ShowAvailablePackages() const
{
	return fShowAvailablePackages;
}


bool
PackageFilterSpecification::ShowInstalledPackages() const
{
	return fShowInstalledPackages;
}


bool
PackageFilterSpecification::ShowSourcePackages() const
{
	return fShowSourcePackages;
}


bool
PackageFilterSpecification::ShowDevelopPackages() const
{
	return fShowDevelopPackages;
}


void
PackageFilterSpecification::SetSearchTerms(BString value)
{
	fSearchTerms = value;
}


void
PackageFilterSpecification::SetDepotName(BString value)
{
	fDepotName = value;
}


void
PackageFilterSpecification::SetCategory(BString value)
{
	fCategory = value;
}


void
PackageFilterSpecification::SetMinimumPackageTimestamp(uint64 value)
{
	fMinimumPackageTimestamp = value;
}


void
PackageFilterSpecification::SetMaximumPackageTimestampExclusive(uint64 value)
{
	fMaximumPackageTimestampExclusive = value;
}


void
PackageFilterSpecification::SetMinimumVersionTimestamp(uint64 value)
{
	fMinimumVersionTimestamp = value;
}


void
PackageFilterSpecification::SetShowOnlyDesktopPackages(bool value)
{
	fShowOnlyDesktopPackages = value;
}


void
PackageFilterSpecification::SetShowOnlyNativeDesktopPackages(bool value)
{
	fShowOnlyNativeDesktopPackages = value;
}


void
PackageFilterSpecification::SetShowAvailablePackages(bool value)
{
	fShowAvailablePackages = value;
}


void
PackageFilterSpecification::SetShowInstalledPackages(bool value)
{
	fShowInstalledPackages = value;
}


void
PackageFilterSpecification::SetShowSourcePackages(bool value)
{
	fShowSourcePackages = value;
}


void
PackageFilterSpecification::SetShowDevelopPackages(bool value)
{
	fShowDevelopPackages = value;
}


// #pragma mark - PackageClassificationInfoBuilder


PackageFilterSpecificationBuilder::PackageFilterSpecificationBuilder()
	:
	fSearchTerms(""),
	fDepotName(""),
	fCategory(""),
	fMinimumPackageTimestamp(0),
	fMaximumPackageTimestampExclusive(0),
	fMinimumVersionTimestamp(0),
	fShowOnlyDesktopPackages(false),
	fShowOnlyNativeDesktopPackages(false),
	fShowAvailablePackages(true),
	fShowInstalledPackages(true),
	fShowSourcePackages(false),
	fShowDevelopPackages(false)
{
}


PackageFilterSpecificationBuilder::PackageFilterSpecificationBuilder(
	const PackageFilterSpecificationRef& value)
	:
	fSource(value),
	fSearchTerms(""),
	fDepotName(""),
	fCategory(""),
	fMinimumPackageTimestamp(0),
	fMaximumPackageTimestampExclusive(0),
	fMinimumVersionTimestamp(0),
	fShowOnlyDesktopPackages(false),
	fShowOnlyNativeDesktopPackages(false),
	fShowAvailablePackages(true),
	fShowInstalledPackages(true),
	fShowSourcePackages(false),
	fShowDevelopPackages(false)
{
}


PackageFilterSpecificationBuilder::~PackageFilterSpecificationBuilder()
{
}


void
PackageFilterSpecificationBuilder::_InitFromSource()
{
	if (fSource.IsSet()) {
		_Init(fSource);
		fSource.Unset();
	}
}


void
PackageFilterSpecificationBuilder::_Init(const PackageFilterSpecification* value)
{
	fSearchTerms = value->SearchTerms();
	fDepotName = value->DepotName();
	fCategory = value->Category();
	fMinimumPackageTimestamp = value->MinimumPackageTimestamp();
	fMaximumPackageTimestampExclusive = value->MaximumPackageTimestampExclusive();
	fMinimumVersionTimestamp = value->MinimumVersionTimestamp();
	fShowOnlyDesktopPackages = value->ShowOnlyDesktopPackages();
	fShowOnlyNativeDesktopPackages = value->ShowOnlyNativeDesktopPackages();
	fShowAvailablePackages = value->ShowAvailablePackages();
	fShowInstalledPackages = value->ShowInstalledPackages();
	fShowSourcePackages = value->ShowSourcePackages();
	fShowDevelopPackages = value->ShowDevelopPackages();
}


PackageFilterSpecificationRef
PackageFilterSpecificationBuilder::BuildRef()
{
	if (fSource.IsSet())
		return fSource;

	PackageFilterSpecification* info = new PackageFilterSpecification();
	info->SetSearchTerms(fSearchTerms);
	info->SetDepotName(fDepotName);
	info->SetCategory(fCategory);
	info->SetMinimumPackageTimestamp(fMinimumPackageTimestamp);
	info->SetMaximumPackageTimestampExclusive(fMaximumPackageTimestampExclusive);
	info->SetMinimumVersionTimestamp(fMinimumVersionTimestamp);
	info->SetShowOnlyDesktopPackages(fShowOnlyDesktopPackages);
	info->SetShowOnlyNativeDesktopPackages(fShowOnlyNativeDesktopPackages);
	info->SetShowAvailablePackages(fShowAvailablePackages);
	info->SetShowInstalledPackages(fShowInstalledPackages);
	info->SetShowSourcePackages(fShowSourcePackages);
	info->SetShowDevelopPackages(fShowDevelopPackages);
	return PackageFilterSpecificationRef(info, true);
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithSearchTerms(BString value)
{
	if (!fSource.IsSet() || fSource->SearchTerms() != value) {
		_InitFromSource();
		fSearchTerms = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithDepotName(BString value)
{
	if (!fSource.IsSet() || fSource->DepotName() != value) {
		_InitFromSource();
		fDepotName = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithCategory(BString value)
{
	if (!fSource.IsSet() || fSource->Category() != value) {
		_InitFromSource();
		fCategory = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithMinimumPackageTimestamp(uint64 value)
{
	if (!fSource.IsSet() || fSource->MinimumPackageTimestamp() != value) {
		_InitFromSource();
		fMinimumPackageTimestamp = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithMaximumPackageTimestampExclusive(uint64 value)
{
	if (!fSource.IsSet() || fSource->MaximumPackageTimestampExclusive() != value) {
		_InitFromSource();
		fMaximumPackageTimestampExclusive = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithMinimumVersionTimestamp(uint64 value)
{
	if (!fSource.IsSet() || fSource->MinimumVersionTimestamp() != value) {
		_InitFromSource();
		fMinimumVersionTimestamp = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithShowOnlyDesktopPackages(bool value)
{
	if (!fSource.IsSet() || fSource->ShowOnlyDesktopPackages() != value) {
		_InitFromSource();
		fShowOnlyDesktopPackages = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithShowOnlyNativeDesktopPackages(bool value)
{
	if (!fSource.IsSet() || fSource->ShowOnlyNativeDesktopPackages() != value) {
		_InitFromSource();
		fShowOnlyNativeDesktopPackages = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithShowAvailablePackages(bool value)
{
	if (!fSource.IsSet() || fSource->ShowAvailablePackages() != value) {
		_InitFromSource();
		fShowAvailablePackages = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithShowInstalledPackages(bool value)
{
	if (!fSource.IsSet() || fSource->ShowInstalledPackages() != value) {
		_InitFromSource();
		fShowInstalledPackages = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithShowSourcePackages(bool value)
{
	if (!fSource.IsSet() || fSource->ShowSourcePackages() != value) {
		_InitFromSource();
		fShowSourcePackages = value;
	}
	return *this;
}


PackageFilterSpecificationBuilder
PackageFilterSpecificationBuilder::WithShowDevelopPackages(bool value)
{
	if (!fSource.IsSet() || fSource->ShowDevelopPackages() != value) {
		_InitFromSource();
		fShowDevelopPackages = value;
	}
	return *this;
}
