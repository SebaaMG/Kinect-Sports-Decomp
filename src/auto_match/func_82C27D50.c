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
extern int fn_82C10B28();


void fn_82C27D50(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *apuStack_30 [12];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  puVar2 = *(undefined4 **)(iVar1 + 0x94);
  if (*(undefined4 **)(iVar1 + 0x94) != (undefined4 *)0x0) {
    do {
      do {
        apuStack_30[0] = puVar2;
        if (apuStack_30[0] == (undefined4 *)0x0) {
          return;
        }
        puVar2 = (undefined4 *)apuStack_30[0][2];
      } while ((apuStack_30[0][1] != 1) && (param_2 == 0));
      iVar3 = (**(code **)(*(int *)(iVar1 + 0x4c) + 8))(*(int *)(iVar1 + 0x4c),*apuStack_30[0]);
      if (iVar3 < 0) {
        return;
      }
      if (apuStack_30[0] == *(undefined4 **)(iVar1 + 0x94)) {
        *(undefined4 *)(iVar1 + 0x94) = apuStack_30[0][2];
      }
      if (apuStack_30[0][3] != 0) {
        *(undefined4 *)(apuStack_30[0][3] + 8) = apuStack_30[0][2];
      }
      if (apuStack_30[0][2] != 0) {
        *(undefined4 *)(apuStack_30[0][2] + 0xc) = apuStack_30[0][3];
      }
      iVar3 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x48),0x1d,apuStack_30);
    } while (-1 < iVar3);
  }
  return;
}

