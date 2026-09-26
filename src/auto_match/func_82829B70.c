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
extern int fn_82826050();
extern int fn_82F6E230();


void fn_82829B70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *apuStack_20 [4];
  
  iVar1 = *(int *)(param_1 + 0x3c);
  puVar2 = *(undefined4 **)(iVar1 + 4);
  apuStack_20[0] = (undefined4 *)*puVar2;
  while( true ) {
    if (apuStack_20[0] == puVar2) break;
    fn_82F6E230(apuStack_20[0][3]);
    fn_82518FF0(apuStack_20);
    iVar1 = *(int *)(param_1 + 0x3c);
    puVar2 = *(undefined4 **)(iVar1 + 4);
  }
  if (iVar1 != 0) {
    fn_82826050(iVar1,1);
  }
  return;
}

