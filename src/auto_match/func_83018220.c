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
extern int fn_82FF82A8();
extern int fn_830178D8();
extern int fn_83019B78();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


char fn_83018220(int param_1,ulonglong param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uStack_40;
  int iStack_3c;
  
  iVar3 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar3);
  if (param_4 == '\0') {
    for (puVar1 = *(undefined4 **)(param_1 + 0x6e0); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[1] == param_3) {
        iVar2 = fn_83019B78(puVar1 + 6,param_2);
        RtlLeaveCriticalSection(iVar3);
        return (iVar2 == 0) + '\x01';
      }
    }
  }
  cVar4 = '\x1f';
  if ((param_2 & 0xffffffff) != 0) {
    fn_830178D8(param_1,param_2);
    uStack_40 = (undefined4)param_2;
    iStack_3c = param_3;
    iVar2 = fn_82FF82A8(param_1 + 0x6c0,&uStack_40);
    cVar4 = (iVar2 == 0) + '\x01';
  }
  RtlLeaveCriticalSection(iVar3);
  return cVar4;
}

