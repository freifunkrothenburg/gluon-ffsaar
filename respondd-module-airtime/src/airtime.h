#pragma once

#include <stdbool.h>
#include <stdint.h>

struct airtime_result {
	uint64_t active_time;
	uint64_t busy_time;
	uint64_t rx_time;
	uint64_t tx_time;
	uint32_t frequency;
	uint8_t  noise;
};

__attribute__((visibility("hidden"))) bool get_airtime(struct airtime_result *result, int ifx);
