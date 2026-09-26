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
extern unsigned int *auStack_30;
extern int fn_827D96A0();
extern int fn_827DDDD8();
extern int fn_827DDFB8();


undefined8 fn_826281A8(int param_1,int *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint auStack_30 [12];
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  for (puVar3 = *(undefined4 **)(param_1 + 0x34); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    iVar2 = (**(code **)(*param_2 + 4))(param_2,*puVar3);
    if (iVar2 != 0) {
      auStack_30[0] = fn_827D96A0(*puVar3);
      auStack_30[0] = auStack_30[0] & 0xffff;
      iVar2 = fn_827DDDD8(param_3,auStack_30);
      if (iVar2 == 0) {
        fn_827DDFB8(param_3,*puVar3);
      }
    }
  }
  return 0;
}

