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
extern int fn_82D0FA60();


undefined8 fn_82D0FE70(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *apuStack_30 [12];
  
  iVar3 = param_3[1];
  fn_82D0FA60(param_1,param_2,apuStack_30);
  if (apuStack_30[0] == (undefined4 *)0x0) {
    if (iVar3 < param_3[1]) {
      iVar4 = iVar3 << 2;
      do {
        puVar1 = *(undefined4 **)(*param_3 + iVar4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < param_3[1]);
    }
    uVar2 = 0;
    param_3[1] = 0;
  }
  else {
    (**(code **)*apuStack_30[0])(apuStack_30[0],1);
    uVar2 = 1;
  }
  return uVar2;
}

