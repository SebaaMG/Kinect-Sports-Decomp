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
extern int fn_82518FF0();
extern int fn_828223C8();
extern unsigned int iStack_40;


void fn_828275C8(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iStack_40;
  undefined4 *apuStack_3c [15];
  
  param_1 = param_1 + 0x2f4;
  iVar3 = 0;
  iVar2 = 0;
  while (fn_828223C8(param_1,&iStack_40), param_1 = iStack_40, iStack_40 != 0) {
    puVar1 = *(undefined4 **)(*(int *)(iStack_40 + 0x28) + 4);
    apuStack_3c[0] = (undefined4 *)*puVar1;
    while (apuStack_3c[0] != puVar1) {
      iVar3 = (uint)*(ushort *)((int)apuStack_3c[0] + 0x1e) + iVar3;
      iVar2 = apuStack_3c[0][5] * (uint)*(ushort *)((int)apuStack_3c[0] + 0x1e) + iVar2;
      fn_82518FF0(apuStack_3c);
    }
  }
  *param_2 = iVar3;
  *param_3 = iVar2;
  return;
}

