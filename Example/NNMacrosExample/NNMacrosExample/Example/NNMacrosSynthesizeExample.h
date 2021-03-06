//
//  NNMacrosSynthesizeExample.h
//  NNMacrosExample
//
//  Created by 顾海军 on 2019/10/16.
//  Copyright © 2019 顾海军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NNMacrosExampleProtocol.h"

@class NNMacrosSynthesizeExample;

@interface NNMacrosSynthesizeExample : NSObject <NNMacrosExampleProtocol>

@end

@interface NNMacrosSynthesizeExample (Synthesize)

@property (nonatomic, strong) NSString *astring;
@property (nonatomic, strong) NSString *zstring;

@property (nonatomic, strong) NSString *string;
@property (nonatomic, strong) id weakId;
@property (nonatomic, assign) NSInteger iValue;
@property (nonatomic, assign) CGRect rValue;

@property (nonatomic, strong) NSString *string2;
@property (nonatomic, strong) id weakId2;
@property (nonatomic, assign) NSInteger iValue2;
@property (nonatomic, assign) CGRect rValue2;

@property (nonatomic, strong) NSString *string3;
@property (nonatomic, strong) NSString *string4;

@end
