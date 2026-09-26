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
extern int fn_82A1E6A0();
extern int fn_82A1EF78();
extern int fn_82FEC008();
extern int fn_82FF8FB0();
extern unsigned int lbl_83264EC8;


char fn_83037858(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = fn_82A1EF78(0x20);
  param_1[1] = iVar1;
  piVar2 = (int *)fn_82FEC008();
  param_1[2] = *piVar2;
  iVar1 = fn_82A1E6A0(0,0,0,0);
  iVar3 = 0;
  param_1[3] = iVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  piVar2 = param_1;
  do {
    piVar2 = piVar2 + 1;
    if (*piVar2 == 0) {
      return '\x02';
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  fn_82FF8FB0(0xffffffff83037768,param_1,0xffffffff832643b4,0xffffffff83264ec8,
                    0xffffffff8217d21c);
  return (lbl_83264EC8 == 0) + '\x01';
}

