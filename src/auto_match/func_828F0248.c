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
extern unsigned int lbl_82027790;
extern unsigned int lbl_82027794;
extern unsigned int lbl_82027798;
extern unsigned int lbl_82027799;


undefined8 fn_828F0248(uint param_1,uint param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar3;
  uint *puVar2;
  
  iVar3 = 0x31;
  puVar1 = (uint *)0x820279e4;
  while( true ) {
    puVar2 = puVar1 + -3;
    iVar3 = iVar3 + -1;
    if ((puVar1[-4] == param_1) && ((*puVar2 & param_2) == param_2)) break;
    puVar1 = puVar2;
    if (puVar2 < &lbl_82027799) {
      return 0xffffffff80004005;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    iVar3 = iVar3 * 0xc;
    *param_3 = *(undefined4 *)(&lbl_82027790 + iVar3);
    param_3[1] = *(undefined4 *)(&lbl_82027794 + iVar3);
    param_3[2] = *(undefined4 *)(&lbl_82027798 + iVar3);
  }
  return 0;
}

