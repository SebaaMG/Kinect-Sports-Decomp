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
extern int fn_830080D8();


undefined8 fn_83007620(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x30);
  }
  if (param_2 == iVar4) {
    bVar1 = *(byte *)(param_1 + 0x3e) >> 1;
    uVar5 = bVar1 & 0x1f;
    puVar2 = (uint *)*param_3;
    if ((bVar1 & 0x1f) == 0) {
      param_3[1] = (int)puVar2;
      bVar1 = *(byte *)(param_1 + 0x3e);
      puVar2 = (uint *)fn_830080D8();
      if (puVar2 != (uint *)0x0) {
        *puVar2 = bVar1 >> 1 & 0x1f;
      }
      return 1;
    }
    bVar3 = false;
    if (puVar2 != (uint *)param_3[1]) {
      do {
        if (*puVar2 == uVar5) {
          bVar3 = true;
          break;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != (uint *)param_3[1]);
    }
    if ((!bVar3) && (puVar2 = (uint *)fn_830080D8(), puVar2 != (uint *)0x0)) {
      *puVar2 = uVar5;
    }
  }
  return 0;
}

