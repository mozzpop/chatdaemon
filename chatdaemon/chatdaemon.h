//
//  chatdaemon.h
//  chatdaemon
//
//  Created by Michael Verges on 10/21/20.
//

#import <Foundation/Foundation.h>
#import "chatdaemonProtocol.h"

// This object implements the protocol which we have defined. It provides the actual behavior for the service. It is 'exported' by the service to make it available to the process hosting the service over an NSXPCConnection.
@interface chatdaemon : NSObject <chatdaemonProtocol>
@end
