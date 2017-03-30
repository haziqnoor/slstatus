/* See LICENSE file for copyright and license details. */

/* alsa sound */
static const char channel[]   = "Master";

/* battery */
static const char batterypath[] = "/sys/class/power_supply/";
static const char batterynow[]  = "charge_now";
static const char batteryfull[] = "charge_full";

/* bar update interval in seconds (smallest value = 1) */
static unsigned int update_interval = 1;

/* statusbar
- battery_perc (battery percentage) [argument: battery name]
- cpu_perc (cpu usage in percent) [argument: NULL]
- datetime (date and time) [argument: format]
- disk_perc (disk usage in percent) [argument: mountpoint]
- ram_perc (ram usage in percent) [argument: NULL]
- temp (temperature in degrees) [argument: temperature file]
- vol_perc (alsa volume and mute status in percent) [argument: soundcard]
- wifi_perc (wifi signal in percent) [argument: wifi card interface name] */
static const struct arg args[] = {
    /* function, format, argument */
    { battery_perc, "⚡ %s ", "BAT0" },
	{ wifi_perc, "📶 %s ", "wls1" },
	{ vol_perc, "🔈%s ", "default" },
    { temp, "🌡%s ", "/sys/devices/platform/coretemp.0/hwmon/hwmon1/temp2_input" },
	{ cpu_perc, "🏿 %s ", NULL},
	{ ram_perc, "𝍫%s ", NULL },
	{ disk_perc, "● %s ", "/" },
	{ datetime, "%s/", "%V" },
	{ datetime, "%s ", "%j" },
	{ datetime, "%s ", "%b%d" },
	{ datetime, "%s", "%a %R" },
};
