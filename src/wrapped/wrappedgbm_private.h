#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

GO(gbm_bo_create, pFpuuuu)
GO(gbm_bo_create_with_modifiers, pFpuuupu)
//GO(gbm_bo_create_with_modifiers2, 
GO(gbm_bo_destroy, vFp)
GO(gbm_bo_get_bpp, uFp)
GO(gbm_bo_get_device, pFp)
GO(gbm_bo_get_fd, iFp)
//GO(gbm_bo_get_fd_for_plane, 
GO(gbm_bo_get_format, uFp)
GO(gbm_bo_get_handle, UFp)
GO(gbm_bo_get_handle_for_plane, UFpi)
GO(gbm_bo_get_height, uFp)
GO(gbm_bo_get_modifier, UFp)
GO(gbm_bo_get_offset, uFpi)
GO(gbm_bo_get_plane_count, iFp)
GO(gbm_bo_get_stride, uFp)
GO(gbm_bo_get_stride_for_plane, uFpi)
GO(gbm_bo_get_user_data, pFp)
GO(gbm_bo_get_width, uFp)
GO(gbm_bo_import, pFpupu)
GO(gbm_bo_map, pFpuuuuupp)
//GOM(gbm_bo_set_user_data, vFEppB)
GO(gbm_bo_unmap, vFpp)
GO(gbm_bo_write, iFppL)
GO(gbm_create_device, pFi)
GO(gbm_device_destroy, vFp)
GO(gbm_device_get_backend_name, pFp)
GO(gbm_device_get_fd, iFp)
GO(gbm_device_get_format_modifier_plane_count, iFpuU)
GO(gbm_device_is_format_supported, iFpuu)
GO(gbm_format_get_name, pFup)
GO(gbm_surface_create, pFpuuuu)
GO(gbm_surface_create_with_modifiers, pFpuuupu)
GO(gbm_surface_create_with_modifiers2, pFpuuupuu)
GO(gbm_surface_destroy, vFp)
GO(gbm_surface_has_free_buffers, iFp)
GO(gbm_surface_lock_front_buffer, pFp)
GO(gbm_surface_release_buffer, vFpp)
