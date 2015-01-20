/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSArray, NSDictionary, TIKeyboardCandidate, TIKeyboardIntermediateText;

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding> {
    TIKeyboardCandidate *_acceptedCandidate;
    unsigned long long _batchCandidateLocation;
    NSArray *_candidates;
    TIKeyboardCandidate *_defaultCandidate;
    unsigned long long _generatedCandidateCount;
    NSDictionary *_indexTitles;
    unsigned long long _initialSelectedIndex;
    NSArray *_initiallyHiddenCandidates;
    unsigned long long _selectedHiddenCandidateIndex;
    NSDictionary *_showExtensionCandidates;
    NSDictionary *_sortMethodGroups;
    NSArray *_sortMethods;
    TIKeyboardIntermediateText *_uncommittedText;
    bool_excludedExtensionCandidates;
}

@property(retain) TIKeyboardCandidate * acceptedCandidate;
@property unsigned long long batchCandidateLocation;
@property(retain) NSArray * candidates;
@property(copy) TIKeyboardCandidate * defaultCandidate;
@property bool excludedExtensionCandidates;
@property(readonly) TIKeyboardCandidate * firstCandidate;
@property unsigned long long generatedCandidateCount;
@property(readonly) bool hasCandidates;
@property(readonly) bool hasMetadata;
@property(retain) NSDictionary * indexTitles;
@property unsigned long long initialSelectedIndex;
@property(retain) NSArray * initiallyHiddenCandidates;
@property(readonly) bool isDummySet;
@property unsigned long long selectedHiddenCandidateIndex;
@property(retain) NSDictionary * showExtensionCandidates;
@property(retain) NSDictionary * sortMethodGroups;
@property(retain) NSArray * sortMethods;
@property(retain) TIKeyboardIntermediateText * uncommittedText;

+ (id)dummySet;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 excludedExtensionCandidates:(bool)arg10;
+ (id)setWithCandidates:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)acceptedCandidate;
- (unsigned long long)batchCandidateLocation;
- (id)candidateGroupsForSortIndex:(long long)arg1;
- (id)candidates;
- (bool)candidatesForSortIndexShowAlternativeText:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultCandidate;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludedExtensionCandidates;
- (id)firstCandidate;
- (unsigned long long)generatedCandidateCount;
- (bool)hasCandidates;
- (bool)hasMetadata;
- (id)indexTitles;
- (id)initWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 excludedExtensionCandidates:(bool)arg10;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialSelectedIndex;
- (id)initiallyHiddenCandidates;
- (bool)isDummySet;
- (bool)isEqual:(id)arg1;
- (bool)isSubsetOf:(id)arg1;
- (unsigned long long)positionInCandidateList:(id)arg1;
- (unsigned long long)selectedHiddenCandidateIndex;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setBatchCandidateLocation:(unsigned long long)arg1;
- (id)setByAppendingSet:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setDefaultCandidate:(id)arg1;
- (void)setExcludedExtensionCandidates:(bool)arg1;
- (void)setGeneratedCandidateCount:(unsigned long long)arg1;
- (void)setIndexTitles:(id)arg1;
- (void)setInitialSelectedIndex:(unsigned long long)arg1;
- (void)setInitiallyHiddenCandidates:(id)arg1;
- (void)setSelectedHiddenCandidateIndex:(unsigned long long)arg1;
- (void)setShowExtensionCandidates:(id)arg1;
- (void)setSortMethodGroups:(id)arg1;
- (void)setSortMethods:(id)arg1;
- (void)setUncommittedText:(id)arg1;
- (id)showExtensionCandidates;
- (id)sortMethodGroups;
- (id)sortMethods;
- (id)uncommittedText;

@end