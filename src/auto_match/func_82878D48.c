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
extern int fn_82870AA0();
extern int fn_82F63CA0();


undefined8 fn_82878D48(int param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x7c);
  if (puVar4 != *(undefined4 **)(param_1 + 0x80)) {
    puVar3 = puVar4 + 1;
    do {
      piVar1 = (int *)*puVar4;
      if (param_2 == '\0') {
        cVar2 = fn_82870AA0(piVar1);
        if ((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar1 + 4))(piVar1), cVar2 == '\x01'))
        goto LAB_82878db8;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      else {
LAB_82878db8:
        fn_82F63CA0(puVar4,puVar3,(*(int *)(param_1 + 0x80) - (int)puVar3 >> 2) << 2);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -4;
        (**(code **)(*piVar1 + 0x1c))(piVar1);
      }
    } while (puVar4 != *(undefined4 **)(param_1 + 0x80));
  }
  return 0x20200000;
}

