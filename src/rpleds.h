# i f n d e f   _ R P L E D S _ H _  
 # d e f i n e   _ R P L E D S _ H _  
 # i n c l u d e   < w i r i n g P i . h >  
         / *   L i b r a r y   h e a d e r   t o   a l l o w   e x t e r n a l   a c c e s s   t o   t h e   c o d e   f o r   c o n t r o l l i n g   t h e   L E D s   o n   t h e   R e t r o - P r i n t e r   m o d u l e .  
               v 1 . 1   ( c )   R W A P   S o f t w a r e  
               v 1 . 1   U p d a t e   t o   u s e   t h e   W i r i n g P i   l i b r a r y  
         * /  
                
         / /   S e t s   u p   t h e   v a l u e s   f o r   t h e   G P I O   p i n s   a n d   t u r n s   o f f   a l l   L E D s   e x c e p t   f o r   t h e   p o w e r  
         e x t e r n   v o i d   i n i t i a l i z e _ l e d s ( ) ;  
          
         e x t e r n   v o i d   a c c e s s _ l e d s ( ) ;   / /   G e t   a c c e s s   t o   l e d s   f o r   s e c o n d a r y   p r o c e s s  
          
         / /   F u n c t i o n s   t o   s w i t c h   l e d s   o n   o r   o f f   -   p a r a m e t e r   i s   " b l u e " ,   " r e d "   o r   " g r e e n "  
         e x t e r n   v o i d   l e d _ o n ( c h a r   * l e d n a m e ) ;  
         e x t e r n   v o i d   l e d _ o f f ( c h a r   * l e d n a m e ) ;  
          
 # e n d i f  
 