/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <SCNRenderer>, SCNNode, SCNScene;

@interface SK3DNode : SKNode {
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
     /* Encoded args for previous method: 32@0:816 */
     /* Encoded args for previous method: 32@0:816 */
    } _originalCameraPosition;
    SCNScene *_scene;
    <SCNRenderer> *_scnRenderer;
    boolautoenablesDefaultLighting;
    boolloops;
    boolplaying;
    SCNNode *pointOfView;
    double sceneTime;
}

@property bool autoenablesDefaultLighting;
@property bool loops;
@property(getter=isPlaying) bool playing;
@property(retain) SCNNode * pointOfView;
@property double sceneTime;
@property(retain) SCNScene * scnScene;
@property struct CGSize { double x1; double x2; } viewportSize;

+ (id)nodeWithViewportSize:(struct CGSize { double x1; double x2; })arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_renderForTime:(double)arg1;
- (bool)autoenablesDefaultLighting;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isPlaying;
- (bool)loops;
- (id)pointOfView;
- (/* Warning: Unrecognized filer type: '3' using 'void*' */ void*)projectPoint:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
- (double)sceneTime;
- (id)scnScene;
- (void)setAutoenablesDefaultLighting:(bool)arg1;
- (void)setLoops:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setSceneTime:(double)arg1;
- (void)setScnScene:(id)arg1;
- (void)setViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (/* Warning: Unrecognized filer type: '3' using 'void*' */ void*)unprojectPoint:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
