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
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


undefined4 fn_823ABBC8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iStack_20;
  int iStack_1c;
  
  for (puVar2 = *(undefined4 **)(param_1 + 0x6c);
      (puVar2 != *(undefined4 **)(param_1 + 0x70) && (*(int *)*puVar2 != param_2));
      puVar2 = puVar2 + 2) {
  }
  if (puVar2 == *(undefined4 **)(param_1 + 0x70)) {
    for (puVar2 = *(undefined4 **)(param_1 + 0x7c);
        (puVar2 != *(undefined4 **)(param_1 + 0x80) && (*(int *)*puVar2 != param_2));
        puVar2 = puVar2 + 2) {
    }
    if (puVar2 == *(undefined4 **)(param_1 + 0x80)) {
      return 8;
    }
  }
  fn_82365BD8(&iStack_20,puVar2);
  uVar1 = *(undefined4 *)(iStack_20 + 4);
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return uVar1;
}

