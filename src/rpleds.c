# i n c l u d e   " r p l e d s . h "  
  
 # i n c l u d e   < s t d i o . h >  
 # i n c l u d e   < s t r i n g . h >  
 # i n c l u d e   < s t d l i b . h >  
 # i n c l u d e   < s y s / s t a t . h >  
  
 # i n c l u d e   < f c n t l . h >  
 # i n c l u d e   < s y s / m m a n . h >  
 # i n c l u d e   < s c h e d . h >  
 # i n c l u d e   < s y s / r e s o u r c e . h >  
  
 # i n c l u d e   < u n i s t d . h >  
  
 / *   L i b r a r y   t o   a l l o w   e x t e r n a l   a c c e s s   t o   t h e   c o d e   f o r   c o n t r o l l i n g   t h e   L E D s   o n   t h e   R e t r o - P r i n t e r   m o d u l e .  
       v 1 . 1   ( c )   R W A P   S o f t w a r e  
       v 1 . 1   U p d a t e   t o   u s e   t h e   W i r i n g P i   l i b r a r y  
 * /  
  
 i n t   l e d p i n s [ ]   =       {   6   , 1 0 ,   9 } ; 	 	 / /   s e t   o n l i n e   l e d ,   a c k   l e d ,   p o w e r   l e d  
  
 i n t   p o w e r L e d ;  
 i n t   o n l i n e L e d ;  
 i n t   a c k L e d ;  
  
 i n t   s e t u p ( v o i d ) ;  
  
 v o i d   i n i t i a l i z e _ l e d s ( )  
 {  
         a c k L e d         =   l e d p i n s [ 0 ] ;  
         o n l i n e L e d   =   l e d p i n s [ 1 ] ;  
         p o w e r L e d     =   l e d p i n s [ 2 ] ;  
  
         p i n M o d e ( l e d p i n s [ 0 ] ,   I N P U T ) ;   / / S E T   a c k L e d  
         p i n M o d e ( l e d p i n s [ 0 ] ,   O U T P U T ) ;   / / S E T   a c k L e d  
         p i n M o d e ( l e d p i n s [ 1 ] ,   I N P U T ) ;   / / S E T   o n l i n e L e d  
         p i n M o d e ( l e d p i n s [ 1 ] ,   O U T P U T ) ;   / / S E T   o n l i n e L e d  
         p i n M o d e ( l e d p i n s [ 2 ] ,   I N P U T ) ;   / / S E T   p o w e r L e d  
         p i n M o d e ( l e d p i n s [ 2 ] ,   O U T P U T ) ;   / / S E T   p o w e r L e d  
  
         d i g i t a l W r i t e   ( p o w e r L e d ,     L O W ) ; / / b l u e  
         d i g i t a l W r i t e   ( o n l i n e L e d ,   L O W ) ; / / r e d  
         d i g i t a l W r i t e   ( a c k L e d ,         L O W ) ; / / g r e e n  
 }  
  
 v o i d   a c c e s s _ l e d s ( )  
 {  
         a c k L e d         =   l e d p i n s [ 0 ] ;  
         o n l i n e L e d   =   l e d p i n s [ 1 ] ;  
         p o w e r L e d     =   l e d p i n s [ 2 ] ;  
  
         p i n M o d e ( l e d p i n s [ 0 ] ,   I N P U T ) ;   / / S E T   a c k L e d  
         p i n M o d e ( l e d p i n s [ 0 ] ,   O U T P U T ) ;   / / S E T   a c k L e d  
         p i n M o d e ( l e d p i n s [ 1 ] ,   I N P U T ) ;   / / S E T   o n l i n e L e d  
         p i n M o d e ( l e d p i n s [ 1 ] ,   O U T P U T ) ;   / / S E T   o n l i n e L e d  
         p i n M o d e ( l e d p i n s [ 2 ] ,   I N P U T ) ;   / / S E T   p o w e r L e d  
         p i n M o d e ( l e d p i n s [ 2 ] ,   O U T P U T ) ;   / / S E T   p o w e r L e d  
  
 }  
  
 v o i d   l e d _ o f f ( c h a r   * l e d n a m e )  
 {  
         i f   ( s t r c m p ( l e d n a m e , " r e d " )   = =   0 )   {  
         	 d i g i t a l W r i t e   ( o n l i n e L e d ,   L O W ) ;  
         }   e l s e   i f   ( s t r c m p ( l e d n a m e , " g r e e n " )   = =   0 )   {  
         	 d i g i t a l W r i t e   ( a c k L e d ,   L O W ) ;  
         }   e l s e   i f   ( s t r c m p ( l e d n a m e , " b l u e " )   = =   0 )   {  
         	 d i g i t a l W r i t e   ( p o w e r L e d ,   L O W ) ;  
         }  
 }  
  
 v o i d   l e d _ o n ( c h a r   * l e d n a m e )  
 {  
         i f   ( s t r c m p ( l e d n a m e , " r e d " )   = =   0 )   {  
                 d i g i t a l W r i t e   ( o n l i n e L e d ,   H I G H ) ;  
         }   e l s e   i f   ( s t r c m p ( l e d n a m e , " g r e e n " )   = =   0 )   {  
         	 d i g i t a l W r i t e   ( a c k L e d ,   H I G H ) ;  
         }   e l s e   i f   ( s t r c m p ( l e d n a m e , " b l u e " )   = =   0 )   {  
         	 d i g i t a l W r i t e   ( p o w e r L e d ,   H I G H ) ;  
         }  
 }  
 