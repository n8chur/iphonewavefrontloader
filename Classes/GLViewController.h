//
//  GLViewController.h
//  Wavefront OBJ Loader
//
//  Created by Jeff LaMarche on 12/14/08.
//  Copyright Jeff LaMarche 2008. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>
#import "OpenGLWaveFrontObject.h"

@class GLView;

@interface GLViewController : UIViewController {
	OpenGLWaveFrontObject *plane;
	OpenGLWaveFrontObject *cylinder;
	OpenGLWaveFrontObject *cube;
	OpenGLWaveFrontObject *sphere;
    OpenGLWaveFrontObject *coin;
    OpenGLWaveFrontObject *head;
}
@property (nonatomic, retain) OpenGLWaveFrontObject *plane;
@property (nonatomic, retain) OpenGLWaveFrontObject *cylinder;
@property (nonatomic, retain) OpenGLWaveFrontObject *cube;
@property (nonatomic, retain) OpenGLWaveFrontObject *sphere;
@property (nonatomic, retain) OpenGLWaveFrontObject *coin;
@property (nonatomic, retain) OpenGLWaveFrontObject *head;
- (void)drawView:(GLView*)view;
- (void)setupView:(GLView*)view;

@end
