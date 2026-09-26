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
extern int fn_8223F248();
extern int fn_8223F320();
extern int fn_82296BC8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AA910;


undefined8 fn_82296B18(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_50 [80];
  
  bVar3 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (undefined4 *)fn_8265C9E0(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      bVar3 = true;
      iVar2 = *(int *)(*param_2 + 0x18);
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      fn_8223F248(auStack_50,iVar2);
      puVar1[1] = 0;
      *puVar1 = &lbl_821AA910;
      fn_82296BC8(puVar1);
    }
    *param_1 = (int)puVar1;
    if (bVar3) {
      fn_8223F320(auStack_50);
    }
  }
  return 4;
}

