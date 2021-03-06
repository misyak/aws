/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 */

/*
 * AWS GreenGrass API.
 *
 * There is not much here, because GreenGrass support is almost transparent.
 * Enable GG in the configuration `aws.greengrass.enable=true` and magically
 * the global MQTT connection goes to GG instead of AWS IoT.
 * GG core bootstrapping is done transparently by the library.
 */

#ifndef CS_MOS_LIBS_AWS_SRC_MGOS_AWS_GREENGRASS_H_
#define CS_MOS_LIBS_AWS_SRC_MGOS_AWS_GREENGRASS_H_

#include <mgos_net.h>

#include "mgos_aws.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if MG_ENABLE_SSL

/* Network configuration hook handler for the AWS GreenGrass. */
void aws_gg_net_ready(enum mgos_net_event ev,
                      const struct mgos_net_event_data *ev_data, void *arg);

/* Reconnect to GreenGrass. */
void aws_gg_reconnect(void);

#endif /* MG_ENABLE_SSL */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CS_MOS_LIBS_AWS_SRC_MGOS_AWS_GREENGRASS_H_ */
