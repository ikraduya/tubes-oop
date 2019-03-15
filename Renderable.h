#ifndef RENDERABLE_H
#define RENDERABLE_H

/**
 * Kelas Renderable yang berisi abstract method render
 */

class Renderable {
public:
  /**
   * virtual abstract method render
   */
  virtual void render() =0;
};

#endif