typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int fStack_4c;
extern int fn_82230300();
extern int fn_823A1398();
extern int fn_8252D2F8();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_48;
extern unsigned int iStack_54;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000020;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;


void fn_823A1208(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float afStack_a0 [4];
  int *apiStack_90 [4];
  undefined4 ***apppuStack_80 [5];
  uint uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar2 = (undefined4 *)((uint)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  fn_823A1398(apppuStack_80,param_1);
  if (uStack_6c < 0x10) {
    apppuStack_80[0] = apppuStack_80;
  }
  fn_8255FD70(apiStack_90,*(undefined4 *)(param_1[2] + 0x180),apppuStack_80[0]);
  uStack_3c = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_44 = 0x40;
  uStack_60 = 0x4d697850;
  uStack_58 = lbl_821CC160;
  uStack_50 = lbl_821917C0;
  iVar1 = *apiStack_90[0];
  fStack_4c = *(float *)(iVar1 + 0x4c);
  uStack_5c = *(undefined4 *)(iVar1 + 0x48);
  iStack_48 = (int)*(char *)(iVar1 + 0x58);
  iStack_54 = (int)*(char *)(iVar1 + 0x5a);
  if (fStack_4c == lbl_821954E8) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    afStack_a0[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
    fStack_4c = afStack_a0[0] - lbl_821CA460;
  }
  uStack_40 = *(undefined4 *)(iVar1 + 0x50);
  fn_8252D2F8(param_1[2],0,&uStack_60,iVar1 + 0x40);
  afStack_a0[0] = *(float *)(*param_1 + 8);
  afStack_a0[0] =
       (float)fn_825354B8(afStack_a0,&stack0x00000020,0,*(undefined4 *)(param_2 + 0x84c),
                                0xffffffff83296bc0,0xffffffff83296bd0);
  fn_82536288(afStack_a0);
  fn_8265CA20(apiStack_90[0]);
  fn_82230300(apppuStack_80,1,0);
  return;
}

