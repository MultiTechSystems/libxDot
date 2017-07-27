/**   __  ___     ____  _    ______        __     ____         __                  ____
 *   /  |/  /_ __/ / /_(_)__/_  __/__ ____/ /    / __/_ _____ / /____ __ _  ___   /  _/__  ____
 *  / /|_/ / // / / __/ /___// / / -_) __/ _ \  _\ \/ // (_-</ __/ -_)  ' \(_-<  _/ // _ \/ __/ __
 * /_/  /_/\_,_/_/\__/_/    /_/  \__/\__/_//_/ /___/\_, /___/\__/\__/_/_/_/___/ /___/_//_/\__/ /_/
 * Copyright (C) 2015 by Multi-Tech Systems        /___/
 *
 *
 * @author Mike Fiore
 * @date   5-16-2017
 * @brief  lora::ChannelPlan provides an interface for LoRaWAN channel schemes
 *
 * @details
 *
 */

#ifndef __CHANNEL_PLAN_AS923_JAPAN_H__
#define __CHANNEL_PLAN_AS923_JAPAN_H__

#include "ChannelPlan_AS923.h"

namespace lora {

    class ChannelPlan_AS923_Japan: public lora::ChannelPlan_AS923 {
        public:
            /**
             * ChannelPlan constructor
             * @param radio SxRadio object used to set Tx/Rx config
             * @param settings Settings object
             */
            ChannelPlan_AS923_Japan();
            ChannelPlan_AS923_Japan(Settings* settings);
            ChannelPlan_AS923_Japan(SxRadio* radio, Settings* settings);

            /**
             * ChannelPlan destructor
             */
            virtual ~ChannelPlan_AS923_Japan();

            /**
             * Initialize channels, datarates and duty cycle bands according to current channel plan in settings
             */
            virtual void Init();

            /**
             * Set LBT time and threshold to defaults
             */
            virtual void DefaultLBT();
    };
}

#endif //__CHANNEL_PLAN_AS923JAPAN_H__
