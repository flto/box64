#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

GO(wl_array_add, pFpL)
GO(wl_array_copy, iFpp)
GO(wl_array_init, vFp)
GO(wl_array_release, vFp)
DATA(wl_buffer_interface, 40)
DATA(wl_callback_interface, 40)
DATA(wl_compositor_interface, 40)
DATA(wl_data_device_interface, 40)
DATA(wl_data_device_manager_interface, 40)
//DATA(wl_data_offer_interface,
DATA(wl_data_source_interface, 40)
GO(wl_display_cancel_read, vFp)
GO(wl_display_connect, pFp)
GO(wl_display_connect_to_fd, pFi)
GO(wl_display_create_queue, pFp)
GO(wl_display_disconnect, vFp)
GO(wl_display_dispatch, iFp)
GO(wl_display_dispatch_pending, iFp)
GO(wl_display_dispatch_queue, iFpp)
GO(wl_display_dispatch_queue_pending, iFpp)
GO(wl_display_flush, iFp)
GO(wl_display_get_error, iFp)
GO(wl_display_get_fd, iFp)
//GO(wl_display_get_protocol_error, 
//DATA(wl_display_interface, 
GO(wl_display_prepare_read, iFp)
GO(wl_display_prepare_read_queue, iFpp)
GO(wl_display_read_events, iFp)
GO(wl_display_roundtrip, iFp)
GO(wl_display_roundtrip_queue, iFpp)
GO(wl_event_queue_destroy, vFp)
DATA(wl_keyboard_interface, 40)
GO(wl_list_empty, iFp)
GO(wl_list_init, vFp)
GO(wl_list_insert, vFpp)
GO(wl_list_insert_list, vFpp)
GO(wl_list_length, iFp)
GO(wl_list_remove, vFp)
//GO(wl_log_set_handler_client, 
DATA(wl_output_interface, 40)
DATA(wl_pointer_interface, 40)
//GO(wl_proxy_add_dispatcher, 
//GO(wl_proxy_add_listener, 
GO(wl_proxy_create, pFpp)
GO(wl_proxy_create_wrapper, pFp)
GO(wl_proxy_destroy, vFp)
//GO(wl_proxy_get_class, 
GO(wl_proxy_get_id, uFp)
//GO(wl_proxy_get_listener, 
//GO(wl_proxy_get_tag, 
GO(wl_proxy_get_user_data, pFp)
GO(wl_proxy_get_version, uFp)
//GO(wl_proxy_marshal, 
//GO(wl_proxy_marshal_array, 
//GO(wl_proxy_marshal_array_constructor, 
//GO(wl_proxy_marshal_array_constructor_versioned, 
GO(wl_proxy_marshal_array_flags, pFpupuup)
//GO(wl_proxy_marshal_constructor, 
//GO(wl_proxy_marshal_constructor_versioned, 
//GO(wl_proxy_marshal_flags, 
GO(wl_proxy_set_queue, vFpp)
//GO(wl_proxy_set_tag, 
//GO(wl_proxy_set_user_data, 
GO(wl_proxy_wrapper_destroy, vFp)
DATA(wl_region_interface, 40)
DATA(wl_registry_interface, 40)
DATA(wl_seat_interface, 40)
DATA(wl_shell_interface, 40)
DATA(wl_shell_surface_interface, 40)
DATA(wl_shm_interface, 40)
DATA(wl_shm_pool_interface, 40)
DATA(wl_subcompositor_interface, 40)
DATA(wl_subsurface_interface, 40)
DATA(wl_surface_interface, 40)
DATA(wl_touch_interface, 40)
