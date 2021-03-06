//
//  ctmf.h
//  ctmf-neon
//
//  Created by Andrey Volodin on 03/07/2019.
//  Copyright © 2019 Andrey Volodin. All rights reserved.
//

#ifndef CTMF_H
#define CTMF_H

#ifdef __cplusplus
extern "C" {
#endif
    
    void ctmf(
              const unsigned char* src, unsigned char* dst,
              int width, int height,
              int src_step_row, int dst_step_row,
              int r, int channels, unsigned long memsize
              );
    
#ifdef __cplusplus
}
#endif

#endif
