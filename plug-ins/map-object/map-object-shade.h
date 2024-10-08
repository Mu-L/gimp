#ifndef __MAPOBJECT_SHADE_H__
#define __MAPOBJECT_SHADE_H__

typedef void (* get_ray_color_func) (GimpVector3 *pos,
                                     gdouble     *color);

extern get_ray_color_func get_ray_color;

void   get_ray_color_plane      (GimpVector3   *pos,
                                 gdouble       *color);
void   get_ray_color_sphere     (GimpVector3   *pos,
                                 gdouble       *color);
void   get_ray_color_box        (GimpVector3   *pos,
                                 gdouble       *color);
void   get_ray_color_cylinder   (GimpVector3   *pos,
                                 gdouble       *color);
void     compute_bounding_box   (void);

void     vecmulmat              (GimpVector3   *u,
                                 GimpVector3   *v,
                                 gfloat         m[16]);
void     rotatemat              (gfloat         angle,
                                 GimpVector3   *v,
                                 gfloat         m[16]);
void     transpose_mat          (gfloat         m[16]);
void     matmul                 (gfloat         a[16],
                                 gfloat         b[16],
                                 gfloat         c[16]);
void     ident_mat              (gfloat         m[16]);
                                               
void     composite              (gdouble       *color1,
                                 gdouble       *color2,
                                 CompositeType  mode);

#endif  /* __MAPOBJECT_SHADE_H__ */
