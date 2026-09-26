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
extern unsigned int *auStack_80;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_82A1CFC8();
extern int fn_82A1E968();
extern int fn_82A1F740();
extern int fn_82A1F9D0();
extern int fn_82A21368();
extern int fn_82A23B20();
extern unsigned int lbl_8315D2D0;
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219CD8;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8 fn_82A242E0(int param_1,longlong *param_2,undefined4 *param_3,uint *param_4)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 auStack_b0 [2];
  undefined1 auStack_a8 [8];
  uint uStack_a0;
  uint uStack_9c;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_80 [128];
  
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 == 0) {
    do {
      while( true ) {
        fn_82A1E968(&uStack_a0);
        do {
          uVar3 = lbl_83219CD8 ^ uStack_9c;
          lbl_83219CD8 = lbl_83219CD8 + 1;
          uVar3 = uVar3 ^ uStack_a0;
        } while (uVar3 < 0x10);
        *(uint *)(param_1 + 0x14) = uVar3;
        fn_82A23B20(param_1,1,auStack_80,0x40);
        RtlInitAnsiString(auStack_a8,auStack_80);
        puStack_8c = auStack_a8;
        uStack_90 = 0xfffffffd;
        uStack_88 = 0x40;
        iVar2 = (**(code **)(lbl_83219B8C + 0xc))
                          (auStack_b0,0xffffffff80100000,&uStack_90,auStack_98,param_2,0,0,1);
        if (iVar2 < 0) break;
        NtClose(auStack_b0[0]);
      }
      fn_82A21368(lbl_83219B94,param_1);
      fn_82A1CFC8();
      if (0x7fffff < *param_2) {
        fn_82A1F740(lbl_8315D2D0);
      }
      uVar1 = fn_82A1F9D0(auStack_a8,param_2,0,auStack_b0);
      if (-1 < (int)uVar1) goto LAB_82a24344;
    } while ((int)uVar1 == -0x3fffffcb);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    fn_82A23B20(param_1,1,auStack_80,0x40);
    RtlInitAnsiString(auStack_a8,auStack_80);
    uVar1 = fn_82A1F9D0(auStack_a8,param_2,1,auStack_b0);
    if (-1 < (int)uVar1) {
LAB_82a24344:
      uVar1 = 0;
      *param_4 = uVar3;
      *param_3 = auStack_b0[0];
    }
  }
  return uVar1;
}

