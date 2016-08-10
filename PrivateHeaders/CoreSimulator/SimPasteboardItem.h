//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSimulator/NSPasteboardItemDataProvider-Protocol.h>

@class NSArray;
@class NSMapTable;
@class NSMutableArray;
@class NSMutableDictionary;
@class NSPasteboardItem;
@class NSString;

@interface SimPasteboardItem : NSObject <NSPasteboardItemDataProvider>
{
    BOOL _typesAllResolved;
    NSMutableDictionary *_dataDictionary;
    NSMutableArray *_preferredOrderedTypes;
    NSMapTable *_promisedDataTypes;
    NSPasteboardItem *_nsPasteboardItem;
}

+ (id)itemFromNSPasteboardItem:(id)arg1 options:(id)arg2;
@property (nonatomic, assign) BOOL typesAllResolved;
@property (retain, nonatomic) NSPasteboardItem *nsPasteboardItem;
@property (retain, nonatomic) NSMapTable *promisedDataTypes;
@property (retain, nonatomic) NSMutableArray *preferredOrderedTypes;
@property (retain, nonatomic) NSMutableDictionary *dataDictionary;
- (void).cxx_destruct;
- (void)resolveAllTypes;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
@property (atomic, copy, readonly) NSPasteboardItem *nsPasteboardRepresentation;
@property (atomic, copy, readonly) NSArray *types;
- (id)valueForType:(id)arg1;
- (BOOL)setValue:(id)arg1 forType:(id)arg2;
- (BOOL)setDataProvider:(id)arg1 forTypes:(id)arg2;
@property (atomic, copy, readonly) NSString *description;
- (id)init;
@property (readonly, copy, nonatomic) NSArray *internalRepresentation;

// Remaining properties
@property (atomic, copy, readonly) NSString *debugDescription;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

@end