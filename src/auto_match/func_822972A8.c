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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8223CA80();
extern int fn_8223F248();
extern int fn_8223F320();
extern int fn_8265C9E0();
extern int fn_82F62DF8();
extern unsigned int lbl_821AA96C;


undefined8 fn_822972A8(int *param_1,int *param_2)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  bVar5 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined4 *)fn_8265C9E0(0x20);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      bVar5 = true;
      iVar4 = *(int *)(*param_2 + 0x18);
      if (iVar4 == 0) {
        iVar4 = *param_2 + 0x1c;
      }
      uVar1 = fn_8223F248(auStack_50,iVar4);
      puVar2[1] = 0;
      *puVar2 = &lbl_821AA96C;
      puVar3 = (undefined4 *)fn_8223CA80(auStack_60,uVar1);
      puVar2[2] = *puVar3;
      puVar2[3] = puVar3[1];
      puVar2[4] = puVar3[2];
      puVar2[5] = puVar3[3];
      uVar1 = fn_82F62DF8();
      *(undefined8 *)(puVar2 + 6) = uVar1;
    }
    *param_1 = (int)puVar2;
    if (bVar5) {
      fn_8223F320(auStack_50);
    }
  }
  return 2;
}

