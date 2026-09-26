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
extern int fn_822D6AB8();
extern int fn_8265CA20();
extern int fn_8288B760();


void fn_823279C8(int *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar5;
  longlong lVar4;
  undefined4 *puVar6;
  
  cVar5 = fn_8288B760();
  if (cVar5 == '\0') {
    puVar1 = (undefined4 *)param_1[0x34];
    puVar6 = (undefined4 *)*puVar1;
    while (puVar6 != puVar1) {
      if ((ulonglong)(uint)puVar6[2] == (param_2 & 0xffffffff)) {
        puVar2 = (undefined4 *)puVar6[1];
        puVar3 = (undefined4 *)*puVar6;
        *puVar2 = puVar3;
        puVar3[1] = puVar2;
        fn_8265CA20(puVar6);
        param_1[0x35] = param_1[0x35] + -1;
        puVar6 = puVar3;
      }
      else {
        puVar6 = (undefined4 *)*puVar6;
      }
    }
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x50))(param_1);
    fn_822D6AB8(lVar4 + 0x178,param_2);
  }
  return;
}

