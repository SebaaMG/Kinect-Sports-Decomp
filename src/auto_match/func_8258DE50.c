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
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82240378();
extern int fn_824A3140();
extern int fn_8258E3A8();
extern int fn_8265C940();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_64;


ulonglong fn_8258DE50(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined1 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int aiStack_70 [2];
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [28];
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  fn_8258E3A8(aiStack_70,param_1,param_2);
  if (aiStack_70[0] == *(int *)(param_1 + 4)) {
    *param_5 = 0;
    uVar3 = fn_8265C940(param_3,param_4);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      fn_8223B688(auStack_60,param_2);
      uStack_44 = (undefined4)uVar3;
      uStack_40 = 1;
      puVar2 = (undefined4 *)fn_8265C9E0(0x34);
      if (puVar2 == (undefined4 *)0x0) {
        uStack_64 = 0;
        ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_68);
      }
      *puVar2 = *(undefined4 *)(param_1 + 4);
      puVar2[1] = *(undefined4 *)(param_1 + 4);
      puVar2[2] = *(undefined4 *)(param_1 + 4);
      *(undefined1 *)(puVar2 + 0xc) = 0;
      *(undefined1 *)((int)puVar2 + 0x31) = 0;
      if (puVar2 + 3 != (undefined4 *)0x0) {
        fn_82240378(puVar2 + 3,auStack_60);
        puVar2[10] = uStack_44;
        puVar2[0xb] = uStack_40;
      }
      fn_824A3140(aiStack_70,param_1,puVar2);
      fn_82230300(auStack_60,1,0);
    }
  }
  else {
    iVar1 = *(int *)(aiStack_70[0] + 0x2c);
    *param_5 = 1;
    *(int *)(aiStack_70[0] + 0x2c) = iVar1 + 1;
    uVar3 = (ulonglong)*(uint *)(aiStack_70[0] + 0x28);
  }
  fn_82230300(param_2,1,0);
  return uVar3;
}

