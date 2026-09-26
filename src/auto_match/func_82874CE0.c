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
extern unsigned int *auStack_38;
extern unsigned int *auStack_48;
extern unsigned int *auStack_58;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_82834EA0();
extern int fn_82835208();


undefined8 fn_82874CE0(int param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [56];
  
  fn_82834EA0(auStack_70,param_2,*param_2,param_2[1]);
  for (pcVar2 = *(char **)(param_1 + 4); pcVar2 != *(char **)(param_1 + 8); pcVar2 = pcVar2 + 0x70)
  {
    if ((*pcVar2 == '\x01') &&
       (iVar1 = (*(code *)**(undefined4 **)(pcVar2 + 4))
                          (pcVar2 + 4,auStack_68,auStack_38,auStack_48,auStack_58), -1 < iVar1)) {
      fn_82835208(param_2,auStack_68);
    }
  }
  return 0x20260000;
}

