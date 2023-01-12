// Copyright 2023 Puny Human, Licensed under either the MIT or Apache 2.0 license.

#include "ArcInventoryEnhancedInput.h"

#define LOCTEXT_NAMESPACE "FArcInventoryEnhancedInputModule"

void FArcInventoryEnhancedInputModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FArcInventoryEnhancedInputModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FArcInventoryEnhancedInputModule, ArcInventoryEnhancedInput)