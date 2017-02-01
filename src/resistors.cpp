/**
 * Tool for generation of 3D VRML models for KiCad based on 3D CAD seed models
 * Copyright (C) 2017 Mario Luzeiro (mrluzeiro@ua.pt)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include "resistors.h"

std::map <eResistorTolerance, int> g_MapResTolToNumber;
std::map <eResistorTolerance, QString> g_MapResTolToString;
std::map <eResistorTolerance, QString> g_MapResTolToPercentage;

std::map <eResistorBandType, int> g_MapBandToNumber;
std::map <eResistorBandType, QString> g_MapBandToString;

std::map <eResistorPower, QString> g_MapResPwrToString;

std::map <eResistorType, QString> g_MapResTypeToString;

static bool s_initialized = false;

void Init_resistors()
{
    if( s_initialized )
    {
        return;
    }

    g_MapResTolToNumber[RES_TOL_1]   = 1;
    g_MapResTolToNumber[RES_TOL_2]   = 2;
    g_MapResTolToNumber[RES_TOL_05]  = 5;
    g_MapResTolToNumber[RES_TOL_025] = 6;
    g_MapResTolToNumber[RES_TOL_01]  = 7;
    g_MapResTolToNumber[RES_TOL_005] = 8;
    g_MapResTolToNumber[RES_TOL_5]   = 10;
    g_MapResTolToNumber[RES_TOL_10]  = 11;
    g_MapResTolToNumber[RES_TOL_20]  = 12;

    g_MapResTolToPercentage[RES_TOL_1]   = "1%";
    g_MapResTolToPercentage[RES_TOL_2]   = "2%";
    g_MapResTolToPercentage[RES_TOL_05]  = "0.5%";
    g_MapResTolToPercentage[RES_TOL_025] = "0.25%";
    g_MapResTolToPercentage[RES_TOL_01]  = "0.1%";
    g_MapResTolToPercentage[RES_TOL_005] = "0.05%";
    g_MapResTolToPercentage[RES_TOL_5]   = "5%";
    g_MapResTolToPercentage[RES_TOL_10]  = "10%";
    g_MapResTolToPercentage[RES_TOL_20]  = "20%";

    g_MapResTolToString[RES_TOL_1]   = "1";
    g_MapResTolToString[RES_TOL_2]   = "2";
    g_MapResTolToString[RES_TOL_05]  = "05";
    g_MapResTolToString[RES_TOL_025] = "025";
    g_MapResTolToString[RES_TOL_01]  = "01";
    g_MapResTolToString[RES_TOL_005] = "005";
    g_MapResTolToString[RES_TOL_5]   = "5";
    g_MapResTolToString[RES_TOL_10]  = "10";
    g_MapResTolToString[RES_TOL_20]  = "20";

    g_MapBandToNumber[RES_BAND_3] = 3;
    g_MapBandToNumber[RES_BAND_4] = 4;
    g_MapBandToNumber[RES_BAND_5] = 5;
    g_MapBandToNumber[RES_BAND_6] = 6;

    g_MapBandToString[RES_BAND_3] = "3";
    g_MapBandToString[RES_BAND_4] = "4";
    g_MapBandToString[RES_BAND_5] = "5";
    g_MapBandToString[RES_BAND_6] = "6";

    g_MapResPwrToString[RES_PWR_025W] = "025";

    g_MapResTypeToString[RES_TYPE_FILM_CARBON] = "Film_Carbon";

    s_initialized = true;
}
