//
//  chatdaemon.m
//  chatdaemon
//
//  Created by Michael Verges on 10/21/20.
//

#import "chatdaemon.h"

@implementation chatdaemon

// This implements the example protocol. Replace the body of this class with the implementation of this service's protocol.
- (void)upperCaseString:(NSString *)aString withReply:(void (^)(NSString *))reply {
    NSString *response = [aString uppercaseString];
    reply(response);
}

@end
