
#include "sl_btmesh_event_log.h"
#include "sl_btmesh_lighting_server.h"
#include "sl_btmesh_lc_server.h"

void sl_btmesh_app_node_reset_handler(void)
{
  sl_btmesh_log_on_node_reset();
  sl_btmesh_lighting_server_on_node_reset();
  sl_btmesh_lc_server_on_node_reset();
}
