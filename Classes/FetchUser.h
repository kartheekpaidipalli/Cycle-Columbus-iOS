/** Cycle Atlanta, Copyright 2012, 2013 Georgia Institute of Technology
 *                                    Atlanta, GA. USA
 *
 *   @author Christopher Le Dantec <ledantec@gatech.edu>
 *   @author Anhong Guo <guoanhong@gatech.edu>
 *
 *   Cycle Atlanta is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Cycle Atlanta is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Cycle Atlanta.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Foundation/Foundation.h>
#import "ActivityIndicatorDelegate.h"
#import "ProgressView.h"
#import "Trip.h"
#import "User.h"
#import "Note.h"

@class User;
@class Trip;

@interface FetchUser : NSObject 
{
    NSMutableURLRequest *urlRequest;
    NSManagedObjectContext *managedObjectContext;
	NSMutableData *receivedData;
    NSString *deviceUniqueIdHash;
    User *user;
}

@property (nonatomic, strong) NSMutableURLRequest *urlRequest;
@property (nonatomic, strong) User *user;
@property (nonatomic, strong) id <ActivityIndicatorDelegate> activityDelegate;
@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSMutableData *receivedData;
@property (nonatomic, strong) NSString *deviceUniqueIdHash;
@property (nonatomic, strong) id <UIAlertViewDelegate> alertDelegate;
@property (nonatomic, strong) UIViewController *parent;
@property (nonatomic, strong) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, strong) ProgressView *downloadingProgressView;

- (void)fetchUserAndTrip:(UIViewController*)parentView;

@end
