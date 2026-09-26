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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_8253D7A8();
extern int fn_82CE6010();
extern int fn_82D881F0();
extern unsigned int iStack_54;
extern unsigned int iStack_b8;
extern unsigned int lbl_821C40FC;
extern unsigned int stack0x00000030;
extern unsigned int uStack_b4;


bool fn_8253E960(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int in_r0;
  bool bVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined **ppuStack_d0;
  char cStack_cc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [28];
  int iStack_54;
  
  if ((param_2 == 0) && (param_2 = *(int *)(param_1 + 0x7c0), param_2 == 0)) {
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 0x1f8);
    puVar2 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_00010010;
    puVar2[1] = in_register_00010014;
    puVar2[2] = in_register_00010018;
    puVar2[3] = in_vr1;
    cStack_cc = '\0';
    ppuStack_d0 = &lbl_821C40FC;
    uStack_b4 = 0;
    iStack_b8 = param_2;
    fn_82CE6010(auStack_b0,&stack0x00000030);
    fn_8253D7A8(auStack_70,*(undefined4 *)(param_2 + 0x10),auStack_b0,0);
    if (param_3 == -1) {
      param_3 = *(int *)(param_2 + 0x2c);
    }
    iStack_54 = param_3;
    fn_82D881F0(iVar1,auStack_70,*(undefined4 *)(iVar1 + 0x78),&ppuStack_d0);
    bVar3 = cStack_cc == '\0';
  }
  return bVar3;
}

