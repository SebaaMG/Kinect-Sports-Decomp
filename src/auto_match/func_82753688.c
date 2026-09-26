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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82752DF0();
extern int fn_82753078();


void fn_82753688(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 auStack_50 [4];
  undefined4 auStack_4c [19];
  
  if (*param_1 != 0) {
    uVar2 = fn_82753078(auStack_50,*param_2);
    uVar2 = *(uint *)(*param_1 + 4) & uVar2;
    iVar4 = uVar2 * 0xc + *param_1;
    if ((*(int *)(iVar4 + 8) != -2) && (*(uint *)(iVar4 + 0xc) == uVar2)) {
      uVar1 = uVar2;
      uVar6 = 0xffffffff;
      while( true ) {
        uVar7 = uVar1;
        puVar8 = (uint *)(iVar4 + 8);
        if (*(uint *)(iVar4 + 0xc) == uVar2) {
          auStack_4c[0] = *param_2;
          cVar3 = fn_82752DF0((undefined4 *)(iVar4 + 0x10),auStack_4c);
          if (cVar3 != '\0') {
            if (uVar2 == uVar7) {
              uVar2 = *puVar8;
              if (uVar2 != 0xffffffff) {
                iVar5 = *param_1;
                *puVar8 = 0xfffffffe;
                iVar5 = uVar2 * 0xc + iVar5;
                *puVar8 = *(uint *)(iVar5 + 8);
                *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
                *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
                puVar8 = (uint *)(iVar5 + 8);
              }
            }
            else {
              *(uint *)(uVar6 * 0xc + *param_1 + 8) = *puVar8;
            }
            *puVar8 = 0xfffffffe;
            *(int *)*param_1 = *(int *)*param_1 + -1;
            return;
          }
        }
        uVar1 = *puVar8;
        if (uVar1 == 0xffffffff) break;
        iVar4 = uVar1 * 0xc + *param_1;
        uVar6 = uVar7;
      }
      return;
    }
  }
  return;
}

