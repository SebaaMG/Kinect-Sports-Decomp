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
extern int fn_82687270();
extern int fn_826D7CA0();
extern int fn_826DC448();
extern unsigned int iStack_24;
extern unsigned int iStack_28;


undefined4 * fn_826DCF88(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  char cVar4;
  int *piVar3;
  ulonglong uVar2;
  int aiStack_30 [2];
  int iStack_28;
  int iStack_24;
  
  aiStack_30[0] = *param_3;
  iVar1 = *(int *)(param_2 + 0x1c);
  *param_1 = 0;
  param_1[1] = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  cVar4 = fn_826DC448(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x20),&iStack_28,aiStack_30);
  if (cVar4 != '\0') {
    piVar3 = (int *)fn_826D7CA0(&iStack_28,(ulonglong)*(uint *)(param_2 + 0x1c) + 0x18,
                                      aiStack_30);
    if (piVar3 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar3 + 8))(piVar3);
      if ((uVar2 & 0x8000) != 0) {
        *param_1 = piVar3;
        param_1[1] = *(undefined4 *)(aiStack_30[0] + 0x2c);
      }
    }
  }
  if ((iStack_28 == 0) && (iStack_24 != 0)) {
    fn_82687270();
  }
  return param_1;
}

