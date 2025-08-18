# 
# Usage: To re-create this platform project launch xsct with below options.
# xsct C:\OpticsFoundry\OF_Sequencer_Zturn\OF_Sequencer_Zturn_Vitis_2023.1\OpticsFoundry_Seq_Zturn_Platform\platform.tcl
# 
# OR launch xsct and run below command.
# source C:\OpticsFoundry\OF_Sequencer_Zturn\OF_Sequencer_Zturn_Vitis_2023.1\OpticsFoundry_Seq_Zturn_Platform\platform.tcl
# 
# To create the platform in a different location, modify the -out option of "platform create" command.
# -out option specifies the output directory of the platform project.

platform create -name {OpticsFoundry_Seq_Zturn_Platform}\
-hw {C:\OpticsFoundry\OF_Sequencer_Zturn\OF_Sequencer_Zturn_Vivado_2023.1\design_1_wrapper.xsa}\
-out {C:/OpticsFoundry/OF_Sequencer_Zturn/OF_Sequencer_Zturn_Vitis_2023.1}

platform write
domain create -name {standalone_ps7_cortexa9_0} -display-name {standalone_ps7_cortexa9_0} -os {standalone} -proc {ps7_cortexa9_0} -runtime {cpp} -arch {32-bit} -support-app {lwip_echo_server}
platform generate -domains 
platform active {OpticsFoundry_Seq_Zturn_Platform}
domain active {zynq_fsbl}
domain active {standalone_ps7_cortexa9_0}
platform generate -quick
platform generate
bsp reload
bsp config mem_size "524288"
bsp config memp_n_pbuf "1024"
bsp config memp_n_tcp_seg "1024"
bsp config memp_n_udp_pcb "4"
bsp config memp_num_netbuf "8"
bsp config pbuf_pool_size "16384"
bsp config n_rx_descriptors "512"
bsp config n_tx_descriptors "512"
bsp write
bsp reload
catch {bsp regenerate}
platform generate -domains standalone_ps7_cortexa9_0 
