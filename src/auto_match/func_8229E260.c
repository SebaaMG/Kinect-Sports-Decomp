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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_8229E7D0();
extern int fn_8229E8D8();
extern int fn_8265CA20();
extern int fn_82672660();
extern int fn_82F63CA0();
extern unsigned int iStack_1c;


int * fn_8229E260(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  puVar1 = (undefined4 *)fn_8229E7D0();
  if (puVar1[4] == 0) {
    puVar2 = (undefined4 *)*puVar1;
    if (puVar2 != (undefined4 *)puVar1[1]) {
      do {
        if ((int *)*puVar2 == param_1) {
          fn_82F63CA0(puVar2,puVar2 + 1,((int)puVar1[1] - (int)(puVar2 + 1) >> 2) << 2);
          puVar1[1] = puVar1[1] + -4;
          break;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != (undefined4 *)puVar1[1]);
    }
    fn_8229E8D8(puVar1);
  }
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)fn_82279C58(auStack_20);
    fn_82672660(*puVar1,param_1);
    if (iStack_1c != 0) {
      fn_822315A0();
    }
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *param_1 = 0;
  }
  fn_8265CA20(param_1);
  return param_1;
}

