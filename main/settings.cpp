
#include "settings.h"


nvs_handle SettingsBase::storage;


/* Init */
void init_settings()
{
  SettingsBase::init();
  settingsScreen.init();
  settingsTrsIO.init();
  settingsSplashScreen.init();
  settingsCalibration.init();
}
