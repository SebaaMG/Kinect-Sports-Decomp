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
extern int fn_82B82D28();
extern unsigned int iStack_30;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined8
fn_82B16DD0(undefined8 param_1,int param_2,ulonglong param_3,uint *param_4,uint *param_5,
             uint *param_6)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uStack00000024;
  int iStack_30;
  int aiStack_2c [11];
  
  uStack00000024 = (uint)param_3;
  if ((*(uint *)(param_2 + 8) & 0x3f80) == 0x80) {
    while( true ) {
      puVar1 = *(uint **)(param_2 + 0x30);
      if ((*(uint *)(puVar1[3] + 8) & 0x3f80) == 16000) break;
      fn_82B82D28(*(undefined4 *)(param_2 + 0x2c),param_3,aiStack_2c,&stack0x00000024,
                        &iStack_30,0,param_2,0);
      if (iStack_30 != 0) goto LAB_82b16e04;
      for (iVar2 = *(int *)(aiStack_2c[0] + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if ((*(int *)(iVar2 + 0x10) != 0) && (*(int *)(iVar2 + 0x10) != param_2)) goto LAB_82b16e04;
      }
      if ((*(uint *)(aiStack_2c[0] + 8) & 0x3f80) != 0x80) goto LAB_82b16e04;
      param_3 = (ulonglong)uStack00000024;
      param_2 = aiStack_2c[0];
    }
    *param_4 = puVar1[3];
    uVar3 = 1;
    *param_5 = (*puVar1 >> 5 & 0xff) >> ((uint)((param_3 & 0xffffffff) << 1) & 0x3e) & 3;
    *param_6 = *puVar1 & 0x1f;
  }
  else {
LAB_82b16e04:
    uVar3 = 0;
  }
  return uVar3;
}

