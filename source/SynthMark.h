/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef SYNTHMARK_SYNTHMARK_H
#define SYNTHMARK_SYNTHMARK_H

// We use #define here so we can build strings easier.
#define SYNTHMARK_MAJOR_VERSION        1
// #define SYNTHMARK_MINOR_VERSION        5
// #define SYNTHMARK_MINOR_VERSION        6   /* Run under OpenSL thread for SCHED_FIFO. */
// #define SYNTHMARK_MINOR_VERSION        7   /* wakeup/render/delivery jitter */
// #define SYNTHMARK_MINOR_VERSION        8   /* changed SYNTHMARK_FRAMES_PER_BURST from 128 => 64 */
// #define SYNTHMARK_MINOR_VERSION        9   /* Fixed iOS version */
// #define SYNTHMARK_MINOR_VERSION        10  /* Added CPU migration histogram */
// #define SYNTHMARK_MINOR_VERSION        11  /* Added UtilizationMark, print Jitter after Latency */
// #define SYNTHMARK_MINOR_VERSION        12  /* Added CPU Governor hints */
#define SYNTHMARK_MINOR_VERSION        13  /* Default burst size changed from 64 to 96 frames */

// This may be increased without invalidating the benchmark.
constexpr int kSynthmarkMaxVoices   = 512;

constexpr int kSynthmarkNumVoicesLatency  = 10;

// The number of frames that are synthesized at one time.
constexpr int kSynthmarkFramesPerRender  =  8;

constexpr int kSynthmarkSampleRate = 48000;

// These should not be changed.
constexpr int64_t SYNTHMARK_MILLIS_PER_SECOND      = 1000;
constexpr int64_t SYNTHMARK_MICROS_PER_SECOND      = 1000000;
constexpr int64_t SYNTHMARK_NANOS_PER_MICROSECOND  = 1000;
constexpr int64_t SYNTHMARK_NANOS_PER_SECOND       = 1000000000;

typedef float synth_float_t;


#endif // SYNTHMARK_SYNTHMARK_H
