/**
 * d_a_obj_jump.cpp
 * Object - Wind Temple - Iron Boots springboard
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_jump.h"
#include "d/actor/d_a_player.h"
#include "d/d_procname.h"
#include "d/d_priority.h"

namespace daObjJump {

const char Act_c::M_arcname[] = "Hjump";
// FIXME Attributes struct
const Attr_c Act_c::M_attr[2] = {
    { 
        /* m          */ { 0, 0, 0x08, 0x40, 0, 0x0c, 0, 0x06, 0xff, 0xc4, 0xff, 0xff, 0xff, 0xc4, 0, 0x3c,
                          0, 0xfb, 0, 0x3c, 0x01, 0, 0, 0x01, 0x42, 0x20, 0, 0, 0x42, 0xfa, 0, 0,
                          0x43, 0x16, 0, 0, 0, 0, 0, 0, 0x3e, 0xcc, 0xcc, 0xcd, 0x3f, 0x33, 0x33, 0x33,
                          0xbe, 0x19, 0x99, 0x9a, 0xbc, 0xa3, 0xd7, 0x0a, 0x3d, 0xcc, 0xcc, 0xcd, 0x3f, 0x99, 0x99, 0x9a,
                          0x0f, 0x05, 0x05, 0x04, 0x04, 0x06, 0x04, 0x04, 0x01, 0, 0, 0, 0x40, 0, 0, 0 }
    },
    { 
        /* m          */ { 0, 0, 0x08, 0x40, 0, 0x0b, 0, 0x05, 0xff, 0xa6, 0xff, 0xff, 0xff, 0xa6, 0, 0x5a,
                          0x01, 0x91, 0, 0x5a, 0x00, 0, 0, 0x01, 0x43, 0x20, 0, 0, 0x43, 0x87, 0, 0,
                          0x43, 0x96, 0, 0, 0x43, 0x16, 0, 0, 0x3e, 0xcc, 0xcc, 0xcd, 0x3f, 0x33, 0x33, 0x33,
                          0xbe, 0x19, 0x99, 0x9a, 0xbc, 0xa3, 0xd7, 0x0a, 0x3d, 0xcc, 0xcc, 0xcd, 0x3f, 0x99, 0x99, 0x9a,
                          0x0f, 0x05, 0x05, 0x04, 0x04, 0x06, 0x04, 0x04, 0x01, 0, 0, 0, 0x40, 0, 0, 0 }
    }
};
};

/* 00000078-00000184       .text CreateHeap__Q29daObjJump5Act_cFv */
BOOL daObjJump::Act_c::CreateHeap() {
    /* Nonmatching */
}

/* 00000184-0000033C       .text Create__Q29daObjJump5Act_cFv */
BOOL daObjJump::Act_c::Create() {
    /* Nonmatching */
}

/* 0000033C-00000544       .text Mthd_Create__Q29daObjJump5Act_cFv */
cPhs_State daObjJump::Act_c::Mthd_Create() {
    /* Nonmatching */
}

/* 00000A04-00000A0C       .text Delete__Q29daObjJump5Act_cFv */
BOOL daObjJump::Act_c::Delete() {
    return TRUE;
}

/* 00000A0C-00000A58       .text Mthd_Delete__Q29daObjJump5Act_cFv */
BOOL daObjJump::Act_c::Mthd_Delete() {
    u32 result = MoveBGDelete();
    dComIfG_resDelete(&mPhase, M_arcname);
    return result;
}

/* 00000A58-00000B78       .text set_mtx__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::set_mtx() {
    /* Nonmatching */
}

/* 00000B78-00000BB4       .text init_mtx__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::init_mtx() {
    this->mModel->setBaseScale(this->scale);
    this->set_mtx();
    return;
}

/* 00000BB4-00000D9C       .text set_push_flag__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::set_push_flag() {
    /* Nonmatching */
}

/* 00000D9C-00000DB4       .text clear_push_flag__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::clear_push_flag() {
    this->field_0x344[0] = 0;   // FIXME this->field_0x344 = 0;
    this->field_0x344[8] = 0;   // FIXME this->field_0x34c = 0;
    this->field_0x344[5] = 0;   // FIXME this->field_0x349 = 0;
    this->field_0x354[0] = 0;   // FIXME this->field_0x354 = 0;
    return;
}

/* 00000DB4-00000E1C       .text calc_vib_pos__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::calc_vib_pos() {
    this->field_0x340 = this->field_0x340 - (this->field_0x33C - this->field_0x338) * *(float *)(&M_attr[this->field_0x2D4].m[0x2c]);
    this->field_0x340 = this->field_0x340 - this->field_0x340 * *(float *)(&M_attr[this->field_0x2D4].m[0x28]);
    this->field_0x33C = this->field_0x33C + this->field_0x340;
    return;
}

/* 00000E1C-00000E74       .text rideCB__Q29daObjJump5Act_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c */
void daObjJump::Act_c::rideCB(dBgW*, fopAc_ac_c*, fopAc_ac_c*) {
    /* Nonmatching */
}

/* 00000E74-00000F48       .text jnodeCB_lower__Q29daObjJump5Act_cFP7J3DNodei */
BOOL daObjJump::Act_c::jnodeCB_lower(J3DNode*, int) {
    /* Nonmatching */
}

/* 00000F48-00000F64       .text mode_wait_init__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_wait_init() {
    this->field_0x330 = 0;
    this->field_0x338 = 1.0f;
    this->field_0x352 = 0;
    return;
}

/* 00000F64-0000108C       .text mode_wait__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_wait() {
    /* Nonmatching */
}

/* 0000108C-000010B4       .text mode_w_l_init__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_w_l_init() {
    this->field_0x330 = 1;
    this->field_0x338 = *(float *)(&M_attr[this->field_0x2D4].m[0x38]);
    return;
}

/* 000010B4-000010E8       .text mode_w_l__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_w_l() {
    if (this->field_0x33C <= this->field_0x338) {
        this->mode_lower_init();
    }
    return;
}

/* 000010E8-000010FC       .text mode_lower_init__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_lower_init() {
    this->field_0x330 = 2;
    this->field_0x352 = 0;
    return;
}

/* 000010FC-00001200       .text mode_lower__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_lower() {
    /* Nonmatching */
}

/* 00001200-00001228       .text mode_l_u_init__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_l_u_init() {
    this->field_0x330 = 3;
    this->field_0x338 = *(float *)(&M_attr[this->field_0x2D4].m[0x3c]);
    return;
}

/* 00001228-00001290       .text mode_l_u__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_l_u() {
    /* Nonmatching */ 
    if (this->field_0x33C >= this->field_0x338) {
        this->field_0x33C = this->field_0x338;
        this->field_0x340 = 0;
        // FIXME 99%
        if (*(u8*)(&this->field_0x344[5]) != 0) {
            daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
            player->onForceVomitJump();
        }
        this->mode_upper_init();
    }
    return;
}

/* 00001290-000012B8       .text mode_upper_init__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_upper_init() {
    this->field_0x330 = 4;
    this->field_0x334 = *(u8 *)(&M_attr[this->field_0x2D4].m[0x42]);
    return;
}

/* 000012B8-000012EC       .text mode_upper__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_upper() {
    s16 var = this->field_0x334;
    this->field_0x334 = var - 1;
    if ((s16)(var - 1) <= 0) {
        mode_u_w_init();
    }
    return;
}

/* 000012EC-00001304       .text mode_u_w_init__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_u_w_init() {
    this->field_0x330 = 5;
    this->field_0x338 = 1.0f;
    return;
}

/* 00001304-00001338       .text mode_u_w__Q29daObjJump5Act_cFv */
void daObjJump::Act_c::mode_u_w() {
    if (this->field_0x33C <= this->field_0x338) {
        this->mode_wait_init();
    }
    return;
}

/* 00001338-000014B0       .text Execute__Q29daObjJump5Act_cFPPA3_A4_f */
BOOL daObjJump::Act_c::Execute(Mtx**) {
    /* Nonmatching */
}

/* 000014B0-00001594       .text Draw__Q29daObjJump5Act_cFv */
BOOL daObjJump::Act_c::Draw() {
    /* Nonmatching */
}

namespace daObjJump {
namespace {
/* 00001594-000015B4       .text Mthd_Create__Q29daObjJump26@unnamed@d_a_obj_jump_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjJump::Act_c*)i_this)->Mthd_Create();
}

/* 000015B4-000015D4       .text Mthd_Delete__Q29daObjJump26@unnamed@d_a_obj_jump_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjJump::Act_c*)i_this)->Mthd_Delete();
}

/* 000015D4-000015F4       .text Mthd_Execute__Q29daObjJump26@unnamed@d_a_obj_jump_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjJump::Act_c*)i_this)->MoveBGExecute();
}

/* 000015F4-00001620       .text Mthd_Draw__Q29daObjJump26@unnamed@d_a_obj_jump_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjJump::Act_c*)i_this)->Draw();
}

/* 00001620-0000164C       .text Mthd_IsDelete__Q29daObjJump26@unnamed@d_a_obj_jump_cpp@FPv */
BOOL Mthd_IsDelete(void* i_this) {
    return ((daObjJump::Act_c*)i_this)->IsDelete();
}

static actor_method_class Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace
}; // namespace daObjJump

actor_process_profile_definition g_profile_Obj_Jump = {
    /* LayerID      */ fpcLy_CURRENT_e,
    /* ListID       */ 0x0004,
    /* ListPrio     */ fpcPi_CURRENT_e,
    /* ProcName     */ PROC_Obj_Jump,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjJump::Act_c),
    /* SizeOther    */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Priority     */ PRIO_Obj_Jump,
    /* Actor SubMtd */ &daObjJump::Mthd_Table,
    /* Status       */ 0x04 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* CullType     */ fopAc_CULLBOX_CUSTOM_e,
};
