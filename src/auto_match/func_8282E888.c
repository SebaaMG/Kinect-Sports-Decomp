extern char *pcRam8320a79c;
extern char *pcRam8320a7a0;
extern char *pcRam8320a7a4;
extern unsigned int *puRam8320a798;
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
extern unsigned int *auStack_40;
extern int fn_8282DE20();
extern int fn_8282DE68();
extern int fn_8282DEB8();
extern int fn_8282E0B0();
extern int fn_8282E228();
extern int fn_8282E6B8();


bool fn_8282E888(longlong param_1)

{
  int iVar2;
  longlong lVar1;
  code *pcVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 auStack_40 [4];
  undefined4 *puStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  code *pcStack_24;

  auStack_40[0] = 0;
  pcVar3 = pcRam8320a7a4;
  puVar4 = puRam8320a798;
  pcStack_2c = pcRam8320a79c;
  pcStack_28 = pcRam8320a7a0;
  if (pcRam8320a79c == (code *)0x0) {
    pcVar3 = fn_8282DEB8;
    puVar4 = auStack_40;
    pcStack_2c = fn_8282DE20;
    pcStack_28 = fn_8282DE68;
  }
  puStack_30 = puVar4;
  pcStack_24 = pcVar3;
  iVar2 = (*pcStack_2c)(puVar4,param_1 + 0xb8);
  if (iVar2 == 0) {
    fn_8282E0B0(param_1,&puStack_30);
    fn_8282E228(param_1,&puStack_30);
    fn_8282E6B8(param_1,&puStack_30);
    lVar1 = (*pcVar3)(puVar4);
    bVar5 = lVar1 != 0;
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}
